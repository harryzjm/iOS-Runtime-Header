//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _LTMatch : NSObject
{
    NSDictionary *_node;
    NSString *_token;
    struct _NSRange _range;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) NSDictionary *node; // @synthesize node=_node;
- (id)description;
- (id)initWithNode:(id)arg1 range:(struct _NSRange)arg2;

@end

