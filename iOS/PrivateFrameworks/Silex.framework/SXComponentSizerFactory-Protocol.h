//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/SXComponentTypeDescribing-Protocol.h>

@class SXComponentSizer, SXLayoutAttributes;
@protocol SXComponent, SXComponentLayout;

@protocol SXComponentSizerFactory <SXComponentTypeDescribing>
- (SXComponentSizer *)sizerForComponent:(id <SXComponent>)arg1 componentLayout:(id <SXComponentLayout>)arg2 layoutAttributes:(SXLayoutAttributes *)arg3;
@end

