//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WFListEditorUpdateItem, WFVariableEditingContext;

@interface WFListEditingContext : NSObject
{
    _Bool _key;
    _Bool _nested;
    WFVariableEditingContext *_variableContext;
    WFListEditorUpdateItem *_updateItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool nested; // @synthesize nested=_nested;
@property(nonatomic) _Bool key; // @synthesize key=_key;
@property(retain, nonatomic) WFListEditorUpdateItem *updateItem; // @synthesize updateItem=_updateItem;
@property(retain, nonatomic) WFVariableEditingContext *variableContext; // @synthesize variableContext=_variableContext;

@end
