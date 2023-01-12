//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

@interface MCUIInfoSection : NSObject
{
    NSString *_sectionTitle;
    NSString *_sectionFooter;
    NSString *_sectionText;
    NSAttributedString *_sectionAttribtuedText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSAttributedString *sectionAttribtuedText; // @synthesize sectionAttribtuedText=_sectionAttribtuedText;
@property(copy, nonatomic) NSString *sectionText; // @synthesize sectionText=_sectionText;
@property(copy, nonatomic) NSString *sectionFooter; // @synthesize sectionFooter=_sectionFooter;
@property(copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
- (id)initWithSectionTitle:(id)arg1 footer:(id)arg2 attributedText:(id)arg3;
- (id)initWithSectionTitle:(id)arg1 footer:(id)arg2 text:(id)arg3;

@end
