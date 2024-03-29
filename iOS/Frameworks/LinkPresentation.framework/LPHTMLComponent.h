//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DOMElement, LPLinkHTMLGenerator, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface LPHTMLComponent : NSObject
{
    NSMutableArray *_children;
    LPLinkHTMLGenerator *_generator;
    DOMElement *_element;
    NSString *_themePath;
}

+ (id)ruleDictionaryForStyle:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *themePath; // @synthesize themePath=_themePath;
@property(readonly, nonatomic) DOMElement *element; // @synthesize element=_element;
@property(readonly, nonatomic) __weak LPLinkHTMLGenerator *generator; // @synthesize generator=_generator;
- (id)childThemePathWithName:(id)arg1;
- (void)addChild:(id)arg1;
- (id)initWithTagName:(id)arg1 themePath:(id)arg2 generator:(id)arg3;

@end

