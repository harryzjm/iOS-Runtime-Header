//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSInputStream, NSMutableData, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BCSLineReader : NSObject
{
    unsigned long long _bufferSize;
    unsigned long long _maxLineSize;
    NSURL *_URL;
    NSInputStream *_inputStream;
    NSMutableData *_readBuffer;
    char *_endBuffer;
    char *_beginLine;
    char *_endLine;
    NSMutableData *_lineBuffer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableData *lineBuffer; // @synthesize lineBuffer=_lineBuffer;
@property(nonatomic) char *endLine; // @synthesize endLine=_endLine;
@property(nonatomic) char *beginLine; // @synthesize beginLine=_beginLine;
@property(nonatomic) char *endBuffer; // @synthesize endBuffer=_endBuffer;
@property(retain, nonatomic) NSMutableData *readBuffer; // @synthesize readBuffer=_readBuffer;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) unsigned long long maxLineSize; // @synthesize maxLineSize=_maxLineSize;
@property(readonly, nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
- (void)dealloc;
- (_Bool)hasValidURL;
- (void)refillReadBuffer;
- (id)readLine;
- (id)initWithFileURL:(id)arg1 bufferSize:(unsigned long long)arg2 maxLineSize:(unsigned long long)arg3;
- (id)initWithFileURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

