//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDMServiceGraph, NSString;

@interface CDMBaseRequestHandler : NSObject
{
    unsigned long long _handlerState;
    CDMServiceGraph *_serviceGraph;
    id _result;
    NSString *_handlerId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *handlerId; // @synthesize handlerId=_handlerId;
- (id)getResult;
- (id)getError;
- (unsigned long long)getHandlerState;
- (void)setHandlerState:(unsigned long long)arg1;
- (id)getServiceGraph;
- (id)initWithId:(id)arg1 serviceGraph:(id)arg2;
- (id)init;

@end
