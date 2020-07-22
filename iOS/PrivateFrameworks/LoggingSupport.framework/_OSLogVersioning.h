//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _OSLogCollectionReference;

@interface _OSLogVersioning : NSObject
{
    _OSLogCollectionReference *_lcr;
    _Bool _closeOnRelease;
    _Bool _hasEndTimeRef;
    long long _state;
    long long _version;
}

@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool hasEndTimeRef; // @synthesize hasEndTimeRef=_hasEndTimeRef;
- (void).cxx_destruct;
- (_Bool)repairTimesyncDB:(id *)arg1;
- (_Bool)checkTimesyncDB:(_Bool *)arg1 error:(id *)arg2;
- (_Bool)performDestructiveUpdates:(id *)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)initWithCollection:(id)arg1 error:(id *)arg2;
- (id)initWithCollection:(id)arg1 closeOnRelease:(_Bool)arg2 error:(id *)arg3;

@end

