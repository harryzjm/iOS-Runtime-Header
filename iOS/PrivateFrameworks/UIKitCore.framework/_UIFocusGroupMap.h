//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, _UIFocusGroup;

__attribute__((visibility("hidden")))
@interface _UIFocusGroupMap : NSObject
{
    NSMapTable *_environmentToGroupMap;
    NSMapTable *_identifierToGroupMap;
    NSMapTable *_identifierToPrimaryItemMap;
    _UIFocusGroup *_nullGroup;
}

- (void).cxx_destruct;
- (id)primaryFocusItemForGroup:(id)arg1;
- (id)focusGroupForEnvironment:(id)arg1;
- (id)_focusGroupForIdentifier:(id)arg1 withParent:(id)arg2 groupRootEnvironment:(id)arg3;
- (id)init;

@end
