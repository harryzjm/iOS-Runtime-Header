//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EQKitEnvironmentInstance, NSData, NSError;

@interface EQKitMathMLParser : NSObject
{
    struct _xmlNode *mRootNode;
    struct _xmlNs *mNS;
    NSError *mError;
    EQKitEnvironmentInstance *mEnvironment;
    NSData *mSource;
    struct stack<EQKitMathMLParserState, std::__1::deque<EQKitMathMLParserState, std::__1::allocator<EQKitMathMLParserState>>> mState;
    struct AttributeCollection *mAttributeCollection;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=mError;
@property(readonly, nonatomic) struct _xmlNs *ns; // @synthesize ns=mNS;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isElement:(int)arg1 allowedInState:(int)arg2;
- (int)state;
- (void)popState;
- (void)pushState:(int)arg1;
- (id)parseNode:(struct _xmlNode *)arg1;
- (id)parseChildrenAsTokenContentFromXMLNode:(struct _xmlNode *)arg1;
- (void)parseAttributesForNode:(id)arg1 withXMLNode:(struct _xmlNode *)arg2;
- (id)parseChildrenAsNodeFromXMLNode:(struct _xmlNode *)arg1;
- (id)parseChildrenAsArrayFromXMLNode:(struct _xmlNode *)arg1;
- (id)parse;
- (void)reportError:(long long)arg1 withNode:(struct _xmlNode *)arg2;
- (id)environment;
@property(nonatomic) struct AttributeCollection *attributeCollection;
- (void)dealloc;
- (id)initWithDocument:(struct _xmlDoc *)arg1 node:(struct _xmlNode *)arg2 source:(id)arg3 environment:(id)arg4;
- (id)init;

@end

