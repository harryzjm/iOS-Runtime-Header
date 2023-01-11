//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKDOMNode, NSMutableDictionary;

@interface IKDOMNodeData : NSObject
{
    _Bool _updated;
    _Bool _childrenUpdated;
    _Bool _subtreeUpdated;
    _Bool _autoHighlightRead;
    _Bool _bindingUpdated;
    _Bool _dataUpdated;
    IKDOMNode *_ownerJSNode;
    NSMutableDictionary *_featuresMap;
}

+ (id)jsNodeDataForNode:(struct _xmlNode *)arg1 create:(_Bool)arg2;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *featuresMap; // @synthesize featuresMap=_featuresMap;
@property(nonatomic, getter=isDataUpdated) _Bool dataUpdated; // @synthesize dataUpdated=_dataUpdated;
@property(nonatomic, getter=isBindingUpdated) _Bool bindingUpdated; // @synthesize bindingUpdated=_bindingUpdated;
@property(nonatomic, getter=isAutoHighlightRead) _Bool autoHighlightRead; // @synthesize autoHighlightRead=_autoHighlightRead;
@property(nonatomic, getter=isSubtreeUpdated) _Bool subtreeUpdated; // @synthesize subtreeUpdated=_subtreeUpdated;
@property(nonatomic, getter=isChildrenUpdated) _Bool childrenUpdated; // @synthesize childrenUpdated=_childrenUpdated;
@property(nonatomic, getter=isUpdated) _Bool updated; // @synthesize updated=_updated;
@property(nonatomic) __weak IKDOMNode *ownerJSNode; // @synthesize ownerJSNode=_ownerJSNode;
- (void).cxx_destruct;
- (id)featureForName:(id)arg1;
- (void)setFeature:(id)arg1 forName:(id)arg2;

@end

