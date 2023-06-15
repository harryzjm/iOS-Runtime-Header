//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreCacheCreateZoneOperation
{
    NSString *_zoneName;
    CDUnknownBlockType _creationBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType creationBlock; // @synthesize creationBlock=_creationBlock;
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (id)mainReturningError;
- (id)initWithZoneName:(id)arg1 creationBlock:(CDUnknownBlockType)arg2;

@end

