//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RTStarkManager
{
}

+ (_Bool)supportsNotificationName:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)_fetchConnectionStateWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchConnectionStateWithHandler:(CDUnknownBlockType)arg1;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)_shutdown;
- (void)shutdown;

@end
