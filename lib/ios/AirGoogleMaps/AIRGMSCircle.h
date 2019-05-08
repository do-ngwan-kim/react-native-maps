//
//  AIRGMSCircle.h
//  AirMaps
//
//  Created by Dongwan Kim 05/08/2019.
//

#ifdef HAVE_GOOGLE_MAPS

#import <GoogleMaps/GoogleMaps.h>
#import <React/UIView+React.h>

@class AIRGoogleMapCircle;

@interface AIRGMSCircle : GMSCircle
@property (nonatomic, strong) NSString *identifier;
@property (nonatomic, copy) RCTBubblingEventBlock onPress;
@end

#endif
