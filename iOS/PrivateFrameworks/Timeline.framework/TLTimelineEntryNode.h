//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;
@protocol TLTimelineEntry;

@interface TLTimelineEntryNode
{
    id <TLTimelineEntry> _entry;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) id <TLTimelineEntry> entry; // @synthesize entry=_entry;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSDate *date;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)leftEntryNode;
- (id)rightEntryNode;

@end
