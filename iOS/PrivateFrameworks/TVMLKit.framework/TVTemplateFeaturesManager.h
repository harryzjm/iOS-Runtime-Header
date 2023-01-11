//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol TVTemplateFeaturesManagerDelegate;

@interface TVTemplateFeaturesManager : NSObject
{
    NSMutableDictionary *_contextsByFeature;
    id <TVTemplateFeaturesManagerDelegate> _delegate;
}

+ (id)featuresManagerForAppDocument:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TVTemplateFeaturesManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_rankForContext:(id)arg1;
- (id)_contextsForFeature:(id)arg1;
- (id)currentContextForFeature:(id)arg1;
- (void)popContext:(id)arg1 forFeature:(id)arg2;
- (void)pushContext:(id)arg1 forFeature:(id)arg2;

@end
