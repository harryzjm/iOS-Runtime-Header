//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDPhotoLibraryPerson : HMFObject
{
    NSUUID *_UUID;
    NSString *_name;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)updateHMPerson:(id)arg1;
- (id)createHMPerson;
- (id)initWithUUID:(id)arg1 name:(id)arg2;
- (id)initWithHMPerson:(id)arg1;

@end

