//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/MKPlaceEncyclopedicRowViewItem-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MKPlaceEncyclopedicTextItem : NSObject <MKPlaceEncyclopedicRowViewItem>
{
    NSString *label;
    NSString *value;
}

+ (id)textItemWithLabel:(id)arg1 value:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *value; // @synthesize value;
@property(readonly, nonatomic) NSString *label; // @synthesize label;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
