//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNContactCardFieldSection : NSObject
{
    NSString *_sectionType;
    NSArray *_items;
    NSString *_displayTitle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSString *sectionType; // @synthesize sectionType=_sectionType;
- (id)initWithSectionType:(id)arg1 items:(id)arg2 displayTitle:(id)arg3;
- (id)initWithSectionType:(id)arg1 items:(id)arg2;

@end

