//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebInspector/RWIProtocolDOMNode.h>

@interface RWIProtocolDOMNode (IKJSInspector)
+ (id)ik_nodeFromDOMNode:(id)arg1;
+ (id)ik_nodeFromDOMNode:(id)arg1 depth:(int)arg2;
+ (id)safe_initWithNodeId:(int)arg1 nodeType:(int)arg2 nodeName:(id)arg3 localName:(id)arg4 nodeValue:(id)arg5;
- (void)ik_updateWithDOMNode:(id)arg1 fullfillChildren:(_Bool)arg2 dispatcher:(id)arg3;
- (void)ik_updateWithDOMNode:(id)arg1 dispatcher:(id)arg2;
- (id)ik_nodeWithNodeId:(int)arg1;
- (id)ik_description;
- (void)ik_insertChild:(id)arg1 before:(id)arg2;
- (void)ik_removeChildWithId:(int)arg1;
- (void)ik_removeAttributeNamed:(id)arg1;
- (void)ik_setAttributeValue:(id)arg1 name:(id)arg2;
- (id)ik_attributesDictionary;
@end

