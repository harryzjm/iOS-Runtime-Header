//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCXmlPrefixStreamWriterState : NSObject
{
    NSString *_elementPrefix;
    NSString *_attributePrefix;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *attributePrefix; // @synthesize attributePrefix=_attributePrefix;
@property(copy, nonatomic) NSString *elementPrefix; // @synthesize elementPrefix=_elementPrefix;

@end
