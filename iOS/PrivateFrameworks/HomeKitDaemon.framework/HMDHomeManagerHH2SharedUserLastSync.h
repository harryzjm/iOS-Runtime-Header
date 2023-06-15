//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDUser, NSData, NSDate, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHomeManagerHH2SharedUserLastSync : HMFObject
{
    _Bool _valid;
    NSUUID *_homeUUID;
    HMDUser *_user;
    NSDate *_creationDate;
    NSString *_archivePath;
}

+ (id)shortDescription;
- (void).cxx_destruct;
@property(readonly) NSDate *creationDate;
@property(readonly, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(retain) HMDUser *user; // @synthesize user=_user;
@property(retain) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
- (id)attributeDescriptions;
- (id)description;
- (id)privateDescription;
- (id)shortDescription;
- (void)removeArchiveFromLocalDisk;
@property(readonly) NSData *archive;
- (_Bool)isEqual:(id)arg1;
- (void)configure;
- (id)initWithArchivePath:(id)arg1;

@end

