//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/NSCopying-Protocol.h>
#import <PosterBoard/NSObject-Protocol.h>

@class NSArray, NSDate, NSString, NSURL, NSUUID;

@protocol FCActivityDescribing <NSObject, NSCopying>
- (_Bool)isPlaceholder;
@property(nonatomic, readonly) NSURL *activitySetupURL;
@property(nonatomic, readonly) NSURL *activitySettingsURL;
@property(nonatomic, readonly) NSString *activityLifetimesAlternativeDescription;
@property(nonatomic, readonly) NSArray *activityLifetimeDescriptions;
@property(nonatomic, readonly) NSString *activityDetailText;
@property(nonatomic, readonly) NSDate *activityCreationDate;
@property(nonatomic, readonly) NSString *activityColorName;
@property(nonatomic, readonly) NSString *activitySymbolImageName;
@property(nonatomic, readonly) NSString *activityDisplayName;
@property(nonatomic, readonly) NSUUID *activityUniqueIdentifier;
@property(nonatomic, readonly) NSString *activityIdentifier;

// Remaining properties
@property(nonatomic, readonly) _Bool placeholder;
@end

