//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXModeEntityProtocol-Protocol.h>

@class ATXModeEntityScore, NSArray, NSString;

@interface ATXAppModeEntity : NSObject <ATXModeEntityProtocol>
{
    ATXModeEntityScore *scoreMetadata;
    NSString *_bundleId;
    NSArray *_itunesGenreIds;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *itunesGenreIds; // @synthesize itunesGenreIds=_itunesGenreIds;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain, nonatomic) ATXModeEntityScore *scoreMetadata; // @synthesize scoreMetadata;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)jsonDict;
- (id)identifier;
- (id)initWithBundleId:(id)arg1 itunesGenreIds:(id)arg2;
- (id)initWithBundleId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end
