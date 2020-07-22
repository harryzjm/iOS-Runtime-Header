//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableString, NSString;

@interface WBSFeedElement : NSObject
{
    NSMutableDictionary *_children;
    NSMutableString *_content;
    NSString *_name;
    NSDictionary *_attributes;
    NSString *_namespaceURI;
}

@property(readonly, copy, nonatomic) NSDictionary *children; // @synthesize children=_children;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *namespaceURI; // @synthesize namespaceURI=_namespaceURI;
@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)textOfChildWithName:(id)arg1 namespace:(id)arg2;
- (id)textOfChildWithName:(id)arg1;
- (id)childWithName:(id)arg1;
- (id)childrenWithName:(id)arg1 namespace:(id)arg2;
- (id)childrenWithName:(id)arg1;
- (void)appendContent:(id)arg1;
- (void)addChildElement:(id)arg1;
- (id)init;

@end

