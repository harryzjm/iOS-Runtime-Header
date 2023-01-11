//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MIME/MFDataConsumer-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer>
{
    NSMutableArray *_consumers;
    _Bool _serialAppend;
}

+ (id)filterWithConsumer:(id)arg1;
+ (id)filterWithConsumers:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *consumers; // @synthesize consumers=_consumers;
@property(nonatomic, getter=isSerialAppend) _Bool serialAppend; // @synthesize serialAppend=_serialAppend;
- (void)done;
- (long long)appendData:(id)arg1;
- (id)initWithConsumer:(id)arg1;
- (id)initWithConsumers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
