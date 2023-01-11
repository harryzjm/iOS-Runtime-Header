//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Timeline/TLTimelineEntry-Protocol.h>

@class NSData, NSDate, NSString;

@interface TLTimelineBlobEntry : NSObject <TLTimelineEntry>
{
    NSDate *_tl_entryDate;
    NSData *_blob;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *blob; // @synthesize blob=_blob;
@property(retain, nonatomic, setter=tl_setEntryDate:) NSDate *tl_entryDate; // @synthesize tl_entryDate=_tl_entryDate;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)tl_validate:(id *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBlob:(id)arg1 atDate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
