//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriOntology/NSSecureCoding-Protocol.h>

@interface USOSerializedUtteranceSpan : NSObject <NSSecureCoding>
{
    unsigned int _startIndex;
    unsigned int _endIndex;
    unsigned int _startUnicodeScalarIndex;
    unsigned int _endUnicodeScalarIndex;
    int _startMilliSeconds;
    int _endMilliSeconds;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) int endMilliSeconds; // @synthesize endMilliSeconds=_endMilliSeconds;
@property(readonly) int startMilliSeconds; // @synthesize startMilliSeconds=_startMilliSeconds;
@property(readonly) unsigned int endUnicodeScalarIndex; // @synthesize endUnicodeScalarIndex=_endUnicodeScalarIndex;
@property(readonly) unsigned int startUnicodeScalarIndex; // @synthesize startUnicodeScalarIndex=_startUnicodeScalarIndex;
@property(readonly) unsigned int endIndex; // @synthesize endIndex=_endIndex;
@property(readonly) unsigned int startIndex; // @synthesize startIndex=_startIndex;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartIndex:(unsigned int)arg1 endIndex:(unsigned int)arg2 startUnicodeScalarIndex:(unsigned int)arg3 endUnicodeScalarIndex:(unsigned int)arg4 startMilliSeconds:(int)arg5 endMilliSeconds:(int)arg6;
- (id)initWithStartIndex:(unsigned int)arg1 endIndex:(unsigned int)arg2 startUnicodeScalarIndex:(unsigned int)arg3 endUnicodeScalarIndex:(unsigned int)arg4;

@end
