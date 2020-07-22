//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIDOMFeature-Protocol.h>
#import <StoreKitUI/SKUIJSDOMFeatureCollectionAppBridge-Protocol.h>

@class IKAppContext, NSString;
@protocol SKUICollectionDOMFeatureTargetting;

@interface SKUICollectionDOMFeature : NSObject <SKUIJSDOMFeatureCollectionAppBridge, SKUIDOMFeature>
{
    IKAppContext *_appContext;
    NSString *_featureName;
    id <SKUICollectionDOMFeatureTargetting> _collectionTarget;
}

+ (id)featureName;
+ (id)makeFeatureJSObjectForFeature:(id)arg1;
@property(nonatomic) __weak id <SKUICollectionDOMFeatureTargetting> collectionTarget; // @synthesize collectionTarget=_collectionTarget;
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
- (void).cxx_destruct;
- (void)setEditing:(_Bool)arg1 options:(id)arg2;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

