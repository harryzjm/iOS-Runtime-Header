//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PDCommentAuthor : NSObject
{
    unsigned int mId;
    NSString *mName;
    NSString *mInitials;
    unsigned int mLastCommentIndex;
    unsigned int mColorIndex;
}

- (void).cxx_destruct;
- (id)description;
- (void)setColorIndex:(unsigned int)arg1;
- (unsigned int)colorIndex;
- (void)setLastCommentIndex:(unsigned int)arg1;
- (unsigned int)lastCommentIndex;
- (void)setInitials:(id)arg1;
- (id)initials;
- (void)setName:(id)arg1;
- (id)name;
- (void)setId:(unsigned int)arg1;
- (unsigned int)id;
- (id)init;

@end

