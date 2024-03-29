//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IBICSlotSuggestionSetSection : NSObject
{
    Class _slotClass;
    NSString *_title;
    NSString *_identifier;
    double _displayOrder;
}

- (void).cxx_destruct;
@property(readonly) double displayOrder; // @synthesize displayOrder=_displayOrder;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) Class slotClass; // @synthesize slotClass=_slotClass;
- (void)ibic_generateAttributes:(CDUnknownBlockType)arg1;
- (long long)compareDisplayOrder:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 slotClass:(Class)arg2 title:(id)arg3 displayOrder:(double)arg4;

@end

