//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSBundle, NSString, UIImage;

@interface SRAuthorizationGroup : NSObject
{
    NSBundle *_bundle;
}

+ (id)authorizationGroupWithServiceName:(id)arg1;
+ (void)initialize;
- (id)infoPlistAuthorizationCategory;
@property(readonly, copy) NSString *authorizationService;
- (id)localizeExampleDataValue:(id)arg1;
@property(readonly, copy) NSArray *localizedSampleData;
@property(readonly, retain) UIImage *illustration;
@property(readonly, copy) NSArray *platforms;
@property(readonly, copy) NSString *localizedPlatforms;
@property(readonly, copy) NSString *localizedRevokeRequiredAuthAlertDetail;
@property(readonly, copy) NSString *localizedRequiredAuthAlertDetail;
@property(readonly, copy) NSArray *localizedNotCollectedData;
@property(readonly, copy) NSArray *localizedCollectedData;
@property(readonly, copy) NSString *localizedDescription;
@property(readonly, copy) NSString *localizedDisplayName;
- (void)dealloc;
- (id)initWithBundle:(id)arg1;

@end
