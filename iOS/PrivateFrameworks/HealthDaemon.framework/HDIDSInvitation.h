//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface HDIDSInvitation : NSObject
{
    NSUUID *_UUID;
    NSString *_fromID;
    id _codableObject;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) id codableObject; // @synthesize codableObject=_codableObject;
@property(readonly, copy, nonatomic) NSString *fromID; // @synthesize fromID=_fromID;
@property(readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)initWithUUID:(id)arg1 fromID:(id)arg2 codableObject:(id)arg3;

@end
