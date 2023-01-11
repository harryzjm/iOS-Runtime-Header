//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalLogFormatter-Protocol.h>

@class NSDateFormatter, NSString;

@interface CalLogBasicTextFormatter : NSObject <CalLogFormatter>
{
    _Bool _includeFunction;
    _Bool _includeLevel;
    _Bool _includeLogName;
    _Bool _includeMessage;
    _Bool _includeProcessID;
    _Bool _includeProcessName;
    _Bool _includeMachPort;
    _Bool _includeTimestamp;
    _Bool _includeEnvelopePartNames;
    _Bool _useTinyEnvelopePartNames;
    _Bool _useCompactForm;
    _Bool _usePrettyTimestamp;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) _Bool usePrettyTimestamp; // @synthesize usePrettyTimestamp=_usePrettyTimestamp;
@property(nonatomic) _Bool useCompactForm; // @synthesize useCompactForm=_useCompactForm;
@property(nonatomic) _Bool useTinyEnvelopePartNames; // @synthesize useTinyEnvelopePartNames=_useTinyEnvelopePartNames;
@property(nonatomic) _Bool includeEnvelopePartNames; // @synthesize includeEnvelopePartNames=_includeEnvelopePartNames;
@property(nonatomic) _Bool includeTimestamp; // @synthesize includeTimestamp=_includeTimestamp;
@property(nonatomic) _Bool includeMachPort; // @synthesize includeMachPort=_includeMachPort;
@property(nonatomic) _Bool includeProcessName; // @synthesize includeProcessName=_includeProcessName;
@property(nonatomic) _Bool includeProcessID; // @synthesize includeProcessID=_includeProcessID;
@property(nonatomic) _Bool includeMessage; // @synthesize includeMessage=_includeMessage;
@property(nonatomic) _Bool includeLogName; // @synthesize includeLogName=_includeLogName;
@property(nonatomic) _Bool includeLevel; // @synthesize includeLevel=_includeLevel;
@property(nonatomic) _Bool includeFunction; // @synthesize includeFunction=_includeFunction;
- (void).cxx_destruct;
- (id)newFormattedString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

