//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIRowViewElement : SKUIViewElement
{
    NSString *_type;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (long long)pageComponentType;
@property(readonly, nonatomic) NSArray *columns;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

