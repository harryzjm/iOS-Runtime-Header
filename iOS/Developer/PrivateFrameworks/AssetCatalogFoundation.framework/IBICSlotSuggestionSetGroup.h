//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IBICSlotSuggestionSetGroup : NSObject
{
    Class _slotClass;
    long long _mode;
    unsigned long long _options;
    NSString *_sectionIdentifier;
    NSString *_title;
    NSString *_identifier;
    double _displayOrder;
}

- (void).cxx_destruct;
@property(readonly) double displayOrder; // @synthesize displayOrder=_displayOrder;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(readonly) long long mode; // @synthesize mode=_mode;
@property(readonly) Class slotClass; // @synthesize slotClass=_slotClass;
- (void)ibic_generateAttributes:(CDUnknownBlockType)arg1;
- (long long)compareDisplayOrder:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 mode:(long long)arg2 options:(unsigned long long)arg3 slotClass:(Class)arg4 sectionID:(id)arg5 title:(id)arg6 displayOrder:(double)arg7;
- (id)initWithIdentifier:(id)arg1 mode:(long long)arg2 slotClass:(Class)arg3 sectionID:(id)arg4 title:(id)arg5 displayOrder:(double)arg6;
- (id)init;

@end

