//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;
@protocol NSObject;

@interface _UISearchToken : NSObject
{
    id <NSObject> _representedObject;
    NSString *_text;
    UIImage *_image;
}

+ (id)tokenWithIcon:(id)arg1 text:(id)arg2;
+ (id)tokenWithImage:(id)arg1;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) id <NSObject> representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
- (id)initWithRepresentedObject:(id)arg1 text:(id)arg2 image:(id)arg3;
- (id)init;
- (id)_initToken;
- (id)_makeAtomView;

@end

