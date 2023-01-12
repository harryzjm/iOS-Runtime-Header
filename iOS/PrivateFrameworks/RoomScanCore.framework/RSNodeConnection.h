//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RSNodeInput, RSNodeOutput;

@interface RSNodeConnection : NSObject
{
    _Bool _attached;
    RSNodeOutput *_output;
    RSNodeInput *_input;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isAttached) _Bool attached; // @synthesize attached=_attached;
@property(readonly, nonatomic) __weak RSNodeInput *input; // @synthesize input=_input;
@property(readonly, nonatomic) __weak RSNodeOutput *output; // @synthesize output=_output;
- (void)consumeMessage:(id)arg1 fromOutput:(id)arg2;
- (_Bool)detachWithError:(id *)arg1;
- (_Bool)attachWithError:(id *)arg1;
- (id)initWithOutput:(id)arg1 input:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

