//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DialogEngine/DEWriter-Protocol.h>

@protocol DEWriter;

@interface DEMultipartWriter : NSObject <DEWriter>
{
    _Bool _partClosed;
    NSObject<DEWriter> *_writer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool partClosed; // @synthesize partClosed=_partClosed;
@property(retain, nonatomic) NSObject<DEWriter> *writer; // @synthesize writer=_writer;
- (void)writeData:(id)arg1;
- (void)newPart;
- (void)close;
- (void)closeMessage;
- (void)dealloc;
- (id)init;
- (id)initWithWriter:(id)arg1;

@end
