//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSNumber;

@interface HMDStreamDataChunk : HMFObject
{
    _Bool _isLast;
    NSNumber *_sequenceNumber;
    NSData *_data;
}

@property(readonly, copy) NSData *data; // @synthesize data=_data;
@property(readonly) _Bool isLast; // @synthesize isLast=_isLast;
@property(readonly, copy) NSNumber *sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)attributeDescriptions;
- (id)initWithStreamDataDictionary:(id)arg1;
- (id)initWithSequenceNumber:(id)arg1 data:(id)arg2 isLast:(_Bool)arg3;

@end
