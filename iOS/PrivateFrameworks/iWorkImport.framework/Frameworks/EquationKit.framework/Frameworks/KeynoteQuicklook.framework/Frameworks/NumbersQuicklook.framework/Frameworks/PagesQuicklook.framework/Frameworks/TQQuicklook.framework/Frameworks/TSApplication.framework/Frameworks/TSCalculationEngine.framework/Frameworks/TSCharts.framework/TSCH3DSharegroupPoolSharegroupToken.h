//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSCH3DSharegroupPoolSharegroupToken
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)token;
+ (id)_singletonAlloc;
- (_Bool)isOneShot;
- (void)flushTokenSharegroup;
- (void)deleteTokenSharegroup;
- (_Bool)shouldGarbageCollect;
- (void)releaseSharegroup:(id)arg1;
- (void)didRemoveAllInterests;
- (id)tokenSharegroup;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

