//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _HKAuthorizationRecord;

@interface WDAuthorizationRecord : NSObject
{
    _HKAuthorizationRecord *_internalAuthorizationRecord;
    long long _status;
}

- (void).cxx_destruct;
@property long long status; // @synthesize status=_status;
- (_Bool)requestedReading;
- (_Bool)requestedSharing;
- (id)init;
- (id)initWithInternalAuthorizationRecord:(id)arg1;

@end
