//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPObject.h>

@class NSMutableArray;

@interface TSKTreeNodeDeprecated : TSPObject
{
    NSMutableArray *mChildren;
    TSPObject *mObject;
}

- (void).cxx_destruct;
- (void)addChild:(id)arg1;
- (id)nodeAtIndex:(unsigned long long)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(retain, nonatomic) TSPObject *dataObject;
@property(retain, nonatomic) NSMutableArray *children;
- (id)initWithContext:(id)arg1;

@end
