//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTestCore/NSSecureCoding-Protocol.h>
#import <XCTestCore/XCTActivity-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSString, NSUUID;

@interface XCActivityRecord : NSObject <NSSecureCoding, XCTActivity>
{
    _Bool _valid;
    _Bool _isTopLevel;
    _Bool _useLegacySerializationFormat;
    NSString *_title;
    NSString *_activityType;
    NSUUID *_uuid;
    NSDate *_start;
    NSDate *_finish;
    NSString *_aggregationIdentifier;
    double _subactivitiesDuration;
    NSMutableArray *_mutableAttachments;
}

+ (_Bool)_shouldSaveAttachmentWithName:(id)arg1 lifetime:(long long)arg2;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSMutableArray *mutableAttachments; // @synthesize mutableAttachments=_mutableAttachments;
@property(readonly) double subactivitiesDuration; // @synthesize subactivitiesDuration=_subactivitiesDuration;
@property(copy) NSString *aggregationIdentifier; // @synthesize aggregationIdentifier=_aggregationIdentifier;
@property _Bool useLegacySerializationFormat; // @synthesize useLegacySerializationFormat=_useLegacySerializationFormat;
@property _Bool isTopLevel; // @synthesize isTopLevel=_isTopLevel;
@property(readonly, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(copy) NSDate *finish; // @synthesize finish=_finish;
@property(copy) NSDate *start; // @synthesize start=_start;
@property(copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy) NSString *activityType; // @synthesize activityType=_activityType;
@property(copy) NSString *title; // @synthesize title=_title;
- (void)subactivityCompletedWithDuration:(double)arg1;
- (void)_synchronized_ensureValid;
- (void)invalidate;
@property(readonly) double duration;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSArray *attachments;
- (void)addAttachment:(id)arg1;
- (void)_synchronized_addAttachment:(id)arg1;
- (void)replaceAttachment:(id)arg1 withAttachment:(id)arg2;
- (void)removeAttachmentsWithName:(id)arg1;
- (id)attachmentForName:(id)arg1;
- (void)addMemoryGraphData:(id)arg1;
- (void)addDiagnosticReportData:(id)arg1;
- (void)_synchronized_removeAttachmentsWithName:(id)arg1;
- (id)_synchronized_attachmentForName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_decodeLegacyAttachments:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *name;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

