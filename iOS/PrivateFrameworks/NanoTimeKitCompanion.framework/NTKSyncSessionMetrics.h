//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NTKSyncSessionMetrics : NSObject
{
    _Bool _isResetSync;
    _Bool _didSucceed;
    unsigned long long _changesSent;
    unsigned long long _bytesSent;
}

@property(nonatomic) _Bool didSucceed; // @synthesize didSucceed=_didSucceed;
@property(nonatomic) unsigned long long bytesSent; // @synthesize bytesSent=_bytesSent;
@property(nonatomic) unsigned long long changesSent; // @synthesize changesSent=_changesSent;
@property(nonatomic) _Bool isResetSync; // @synthesize isResetSync=_isResetSync;

@end
