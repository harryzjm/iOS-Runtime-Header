//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppContext, NSMutableDictionary;

@interface IKJSArrayBufferStore : NSObject
{
    NSMutableDictionary *_bufferStorage;
    IKAppContext *_appContext;
}

@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(readonly, nonatomic) NSMutableDictionary *bufferStorage; // @synthesize bufferStorage=_bufferStorage;
- (void).cxx_destruct;
- (id)arrayBufferForData:(id)arg1;
- (id)initWithAppContext:(id)arg1;

@end

