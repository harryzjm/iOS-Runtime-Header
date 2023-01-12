//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOutputStream, NSString;
@protocol SHDataStream;

__attribute__((visibility("hidden")))
@interface SHDataStreamOutput : NSObject
{
    id <SHDataStream> _next;
    NSOutputStream *_outputStream;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) id <SHDataStream> next; // @synthesize next=_next;
- (_Bool)processData:(id)arg1 error:(id *)arg2;
- (_Bool)closeWithError:(id *)arg1;
- (id)initWithDestination:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

