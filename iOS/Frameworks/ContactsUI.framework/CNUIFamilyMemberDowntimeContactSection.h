//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNUIFamilyMemberDowntimeContactSection : NSObject
{
    NSArray *_contactItems;
    NSString *_title;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *contactItems; // @synthesize contactItems=_contactItems;
- (id)initWithContactItems:(id)arg1 title:(id)arg2;

@end

