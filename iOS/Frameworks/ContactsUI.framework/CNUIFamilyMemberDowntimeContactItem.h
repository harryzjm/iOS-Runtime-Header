//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface CNUIFamilyMemberDowntimeContactItem : NSObject
{
    _Bool _selected;
    CNContact *_contact;
    NSString *_label;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)initWithContact:(id)arg1 label:(id)arg2;

@end

