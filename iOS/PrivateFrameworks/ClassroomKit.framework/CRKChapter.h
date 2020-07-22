//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface CRKChapter : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSArray *_subchapters;
    NSURL *_webURL;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSURL *webURL; // @synthesize webURL=_webURL;
@property(copy, nonatomic) NSArray *subchapters; // @synthesize subchapters=_subchapters;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *JSONRepresentation;
- (id)description;
- (id)init;

@end

