//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CLSChecklist : NSObject
{
    NSString *_checklistName;
    NSString *_serviceName;
    NSArray *_items;
}

+ (id)checklistWithName:(id)arg1 serviceName:(id)arg2 items:(id)arg3;
+ (id)checklist;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSString *checklistName; // @synthesize checklistName=_checklistName;
- (void).cxx_destruct;
- (id)allItems;

@end

