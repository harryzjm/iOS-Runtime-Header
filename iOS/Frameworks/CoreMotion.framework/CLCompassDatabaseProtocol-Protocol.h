//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreMotion/CLNotifierServiceProtocol-Protocol.h>

@class NSString;

@protocol CLCompassDatabaseProtocol <CLNotifierServiceProtocol>
- (_Bool)syncgetLookupBiasWithMagneticField:(CDStruct_03942939)arg1 acceleration:(CDStruct_03942939)arg2 bias:(CDStruct_03942939 *)arg3 level:(int *)arg4 noResults:(_Bool *)arg5;
- (void)getBiasWithMagneticField:(CDStruct_03942939)arg1 acceleration:(CDStruct_03942939)arg2;
- (int)syncgetPendingSetBiasCount;
- (void)setBias:(CDStruct_03942939)arg1 withMagneticField:(CDStruct_03942939)arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5;
- (void)dumpDatabase:(NSString *)arg1 onCompletion:(void (^)(NSString *))arg2;
- (_Bool)syncgetDoSync:(void (^)(struct CLCompassDatabase *))arg1;
- (void)doAsync:(void (^)(struct CLCompassDatabase *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(struct CLCompassDatabase *))arg1;
@end

