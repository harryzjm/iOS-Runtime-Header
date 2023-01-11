//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface RMModelAssetReference : NSObject
{
    int _assettype;
    NSString *_identifier;
}

+ (id)referenceForIdentifier:(id)arg1 assetschematype:(id)arg2;
+ (id)referenceForIdentifier:(id)arg1 assettype:(int)arg2;
@property(readonly, nonatomic) int assettype; // @synthesize assettype=_assettype;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 assettype:(int)arg2;

@end
