//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVSpanMatchResultInterpreterProvider-Protocol.h>

@class CKVPriorRetrieverFactory, CKVSettings, NSString;

@interface CKVSpanMatchResultInterpreterFactory : NSObject <CKVSpanMatchResultInterpreterProvider>
{
    CKVSettings *_settings;
    CKVPriorRetrieverFactory *_priorRetrieverFactory;
}

- (void).cxx_destruct;
- (id)getInterpreter;
- (id)init;
- (id)initWithSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
