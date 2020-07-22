//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCDisposable-Protocol.h>

@class NSString;

@interface FCObserver : NSObject <FCDisposable>
{
    unsigned long long _token;
    id _keepAliveObject;
    CDUnknownBlockType _observerBlock;
}

@property(copy, nonatomic) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;
@property(nonatomic) __weak id keepAliveObject; // @synthesize keepAliveObject=_keepAliveObject;
@property(nonatomic) unsigned long long token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)dispose;
- (void)disposeOn:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithToken:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

